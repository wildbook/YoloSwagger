using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChampSelectLegacyGameflowGameClient
    {
        [DataMember(Name = "running")]
        bool Running { get; set; }

        [DataMember(Name = "visible")]
        bool Visible { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampSelectLegacyGameflowGameClient {\n");
            sb.Append("  Running: ").Append(Running).Append("\n");
            sb.Append("  Visible: ").Append(Visible).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}