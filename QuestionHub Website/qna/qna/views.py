from django.shortcuts import render
def homepage(request):
    return render(request, 'universal/homepage.html')

def discover(request):
    return render(request, 'universal/discover.html')
