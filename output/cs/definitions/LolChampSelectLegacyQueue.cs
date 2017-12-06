using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChampSelectLegacyQueue
    {
        [DataMember(Name = "areFreeChampionsAllowed")]
        bool AreFreeChampionsAllowed { get; set; }

        [DataMember(Name = "gameTypeConfig")]
        LolChampSelectLegacyQueueGameTypeConfig GameTypeConfig { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampSelectLegacyQueue {\n");
            sb.Append("  AreFreeChampionsAllowed: ").Append(AreFreeChampionsAllowed).Append("\n");
            sb.Append("  GameTypeConfig: ").Append(GameTypeConfig).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}