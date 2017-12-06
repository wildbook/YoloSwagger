using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLootCollectionsWardSkin
    {
        [DataMember(Name = "id")]
        long Id { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "ownership")]
        LolLootCollectionsOwnership Ownership { get; set; }

        [DataMember(Name = "wardImagePath")]
        string WardImagePath { get; set; }

        [DataMember(Name = "wardShadowImagePath")]
        string WardShadowImagePath { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootCollectionsWardSkin {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Ownership: ").Append(Ownership).Append("\n");
            sb.Append("  WardImagePath: ").Append(WardImagePath).Append("\n");
            sb.Append("  WardShadowImagePath: ").Append(WardShadowImagePath).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}