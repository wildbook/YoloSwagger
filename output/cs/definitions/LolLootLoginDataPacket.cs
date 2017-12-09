using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootLoginDataPacket
    {
        [DataMember(Name = "allSummonerData")]
        public LolLootLoginAllSummonerData AllSummonerData { get; set; }

        [DataMember(Name = "simpleMessages")]
        public LolLootLoginSimpleMessage[] SimpleMessages { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootLoginDataPacket {\n");
            sb.Append("  AllSummonerData: ").Append(AllSummonerData).Append("\n");
            sb.Append("  SimpleMessages: ").Append(SimpleMessages).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}