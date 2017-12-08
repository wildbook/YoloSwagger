using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolCollectionsCollectionLoginDataPacket
    {
        [DataMember(Name = "allSummonerData")]
        LolCollectionsSummonerData AllSummonerData { get; set; }

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