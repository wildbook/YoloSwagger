using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMissionsCollectionsChampion
    {
        [DataMember(Name = "freeToPlay")]
        public bool FreeToPlay { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        [DataMember(Name = "ownership")]
        public LolMissionsCollectionsOwnership Ownership { get; set; }

        [DataMember(Name = "skins")]
        public LolMissionsCollectionsChampionSkin[] Skins { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMissionsCollectionsChampion {\n");
            sb.Append("  FreeToPlay: ").Append(FreeToPlay).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Ownership: ").Append(Ownership).Append("\n");
            sb.Append("  Skins: ").Append(Skins).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}