using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolEndOfGameGameflowClient
    {
        [DataMember(Name = "observerServerPort")]
        ushort ObserverServerPort { get; set; }

        [DataMember(Name = "running")]
        bool Running { get; set; }

        [DataMember(Name = "observerServerIp")]
        string ObserverServerIp { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEndOfGameGameflowClient {\n");
            sb.Append("  ObserverServerPort: ").Append(ObserverServerPort).Append("\n");
            sb.Append("  Running: ").Append(Running).Append("\n");
            sb.Append("  ObserverServerIp: ").Append(ObserverServerIp).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}