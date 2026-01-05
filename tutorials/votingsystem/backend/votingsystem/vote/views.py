import json
import subprocess
from django.http import JsonResponse
from django.views.decorators.csrf import csrf_exempt
import os

@csrf_exempt
def cast_vote(request):
    data = json.loads(request.body)
    choice = data.get("vote", 0)

    cpp_executable = os.path.join(os.path.dirname(os.path.dirname(__file__)), "../cpp/vote")

    result = subprocess.run(
        [cpp_executable],
        input=str(choice),
        text=True,
        capture_output=True
    )

    return JsonResponse({"message": result.stdout.strip()})


