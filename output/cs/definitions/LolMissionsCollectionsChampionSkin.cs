using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMissionsCollectionsChampionSkin
    {
        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        [DataMember(Name = "ownership")]
        public LolMissionsCollectionsOwnership Ownership { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMissionsCollectionsChampionSkin {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Ownership: ").Append(Ownership).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}