from .views import cast_vote

from django.urls import path

urlpatterns = [
    path("vote/", cast_vote),
]
