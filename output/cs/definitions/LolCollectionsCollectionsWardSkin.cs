using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolCollectionsCollectionsWardSkin
    {
        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "id")]
        public long Id { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "ownership")]
        public LolCollectionsCollectionsOwnership Ownership { get; set; }

        [DataMember(Name = "wardImagePath")]
        public string WardImagePath { get; set; }

        [DataMember(Name = "wardShadowImagePath")]
        public string WardShadowImagePath { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsCollectionsWardSkin {\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
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