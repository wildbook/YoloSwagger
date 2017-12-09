using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMissionsCollectionsWardSkin
    {
        [DataMember(Name = "id")]
        public long Id { get; set; }

        [DataMember(Name = "ownership")]
        public LolMissionsCollectionsOwnership Ownership { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMissionsCollectionsWardSkin {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Ownership: ").Append(Ownership).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}