import base64, sys

if len(sys.argv) != 2:
    sys.exit("Usage: python3 make_banner.py my-photo.jpg")

photo = base64.b64encode(open(sys.argv[1], "rb").read()).decode()
svg = open("banner-template.svg", encoding="utf-8").read().replace("PHOTO_BASE64", photo)
open("profile-banner.svg", "w", encoding="utf-8").write(svg)
print("Created profile-banner.svg -> copy it to assets/profile-banner.svg in your repo")
