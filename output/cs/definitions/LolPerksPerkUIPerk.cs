using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPerksPerkUIPerk
    {
        [DataMember(Name = "iconPath")]
        string IconPath { get; set; }

        [DataMember(Name = "id")]
        int Id { get; set; }

        [DataMember(Name = "longDesc")]
        string LongDesc { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "shortDesc")]
        string ShortDesc { get; set; }

        [DataMember(Name = "tooltip")]
        string Tooltip { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksPerkUIPerk {\n");
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