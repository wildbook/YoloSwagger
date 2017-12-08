using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolGameflowGameflowGameClient
    {
        [DataMember(Name = "observerServerPort")]
        ushort ObserverServerPort { get; set; }

        [DataMember(Name = "observerServerIp")]
        string ObserverServerIp { get; set; }

        [DataMember(Name = "serverIp")]
        string ServerIp { get; set; }

        [DataMember(Name = "visible")]
        bool Visible { get; set; }

        [DataMember(Name = "running")]
        bool Running { get; set; }

        [DataMember(Name = "serverPort")]
        ushort ServerPort { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameflowGameflowGameClient {\n");
            sb.Append("  ObserverServerPort: ").Append(ObserverServerPort).Append("\n");
            sb.Append("  ObserverServerIp: ").Append(ObserverServerIp).Append("\n");
            sb.Append("  ServerIp: ").Append(ServerIp).Append("\n");
            sb.Append("  Visible: ").Append(Visible).Append("\n");
            sb.Append("  Running: ").Append(Running).Append("\n");
            sb.Append("  ServerPort: ").Append(ServerPort).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}