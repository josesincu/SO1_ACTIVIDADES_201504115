echo $GITHUB_USER
id_user=$(curl -s https://api.github.com/users/$GITHUB_USER | \python3 -c "import sys, json; print(json.load(sys.stdin)['id'])")
create_user=$(curl -s https://api.github.com/users/$GITHUB_USER | \python3 -c "import sys, json; print(json.load(sys.stdin)['created_at'])")
echo "Hola $GITHUB_USER $id_user $create_user"
date >> saludos.log 

