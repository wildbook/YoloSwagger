using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLootLoginDataPacket
    {
        [DataMember(Name = "simpleMessages")]
        LolLootLoginSimpleMessage[] SimpleMessages { get; set; }

        [DataMember(Name = "allSummonerData")]
        LolLootLoginAllSummonerData AllSummonerData { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootLoginDataPacket {\n");
            sb.Append("  SimpleMessages: ").Append(SimpleMessages).Append("\n");
            sb.Append("  AllSummonerData: ").Append(AllSummonerData).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}