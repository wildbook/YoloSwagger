using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolEndOfGameLoginDataPacket
    {
        [DataMember(Name = "allSummonerData")]
        LolEndOfGameLoginSummonerData AllSummonerData { get; set; }

        [DataMember(Name = "platformId")]
        string PlatformId { get; set; }

        [DataMember(Name = "simpleMessages")]
        LolEndOfGameSimpleMessage[] SimpleMessages { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEndOfGameLoginDataPacket {\n");
            sb.Append("  AllSummonerData: ").Append(AllSummonerData).Append("\n");
            sb.Append("  PlatformId: ").Append(PlatformId).Append("\n");
            sb.Append("  SimpleMessages: ").Append(SimpleMessages).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}