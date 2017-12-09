using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolCollectionsCollectionLoginDataPacket
    {
        [DataMember(Name = "allSummonerData")]
        public LolCollectionsSummonerData AllSummonerData { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsCollectionLoginDataPacket {\n");
            sb.Append("  AllSummonerData: ").Append(AllSummonerData).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}