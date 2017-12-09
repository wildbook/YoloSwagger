using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolEndOfGameLoginDataPacket
    {
        [DataMember(Name = "allSummonerData")]
        public LolEndOfGameLoginSummonerData AllSummonerData { get; set; }

        [DataMember(Name = "platformId")]
        public string PlatformId { get; set; }

        [DataMember(Name = "simpleMessages")]
        public LolEndOfGameSimpleMessage[] SimpleMessages { get; set; }

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