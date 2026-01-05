import subprocess
from django.http import JsonResponse
from django.views.decorators.csrf import csrf_exempt

@csrf_exempt
def cast_vote(request):
    candidate_id = request.POST.get("candidate_id")

    cpp_executable = "/home/programming/Desktop/LABS/tutorials/votingsystem/cpp/vote"

    result = subprocess.run(
        [cpp_executable],
        input=str(candidate_id),
        text=True,
        capture_output=True
    )

    return JsonResponse({"message": result.stdout.strip()})
