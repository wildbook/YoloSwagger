using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMissionsCollectionsChampionSkin
    {
        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "id")]
        int Id { get; set; }

        [DataMember(Name = "ownership")]
        LolMissionsCollectionsOwnership Ownership { get; set; }

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