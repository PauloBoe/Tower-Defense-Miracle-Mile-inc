using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletParticle : MonoBehaviour
{
    public ParticleSystem particleSystem;
    public int damage;

    List<ParticleCollisionEvent> colEvents = new List<ParticleCollisionEvent>();

    private void OnParticleCollision(GameObject other) {
        int events = particleSystem.GetCollisionEvents(other, colEvents);
        //for (int i = 0; i < events; i++) {}

        if (other.TryGetComponent(out Health health)) {
            health.TakeDamage(damage);
            Debug.Log(health.gameObject.name);
            particleSystem.Stop();
        }
    }
}
