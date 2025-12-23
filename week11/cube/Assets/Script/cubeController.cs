using UnityEngine;
using System.Collections;
using UnityEngine.InputSystem;

public class cubeController : MonoBehaviour
{
    public float speed = 5f;
    Renderer cubeRender;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        cubeRender = GetComponent<Renderer>();
        StartCoroutine(ChangeColor());
    }

    // Update is called once per frame
    void Update()
    {
        float moveX = 0f;
        float moveZ = 0f;

        if (Input.GetKey(KeyCode.LeftArrow))
            moveX = -1f;

        if (Input.GetKey(KeyCode.RightArrow))
            moveX = 1f;

        if (Input.GetKey(KeyCode.UpArrow))
            moveZ = 1f;

        if (Input.GetKey(KeyCode.DownArrow))
            moveZ = -1f;

        Vector3 movement = new Vector3 (moveX,0f,moveZ);
        transform.Translate(movement * speed * Time.deltaTime);
    }
    IEnumerator ChangeColor()
    {
        while (true)
        {
            cubeRender.material.color = new Color(
                Random.value,
                Random.value,
                Random.value
                );
            yield return new WaitForSeconds(speed);
        }
    }
}
