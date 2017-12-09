using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPerksPerkGDSResource
    {
        [DataMember(Name = "iconPath")]
        public string IconPath { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        [DataMember(Name = "longDesc")]
        public string LongDesc { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "shortDesc")]
        public string ShortDesc { get; set; }

        [DataMember(Name = "tooltip")]
        public string Tooltip { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksPerkGDSResource {\n");
            sb.Append("  IconPath: ").Append(IconPath).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  LongDesc: ").Append(LongDesc).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  ShortDesc: ").Append(ShortDesc).Append("\n");
            sb.Append("  Tooltip: ").Append(Tooltip).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}