using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct ClashRewardOutput
    {
        [DataMember(Name = "alternative")]
        ClashRewardDefinition Alternative { get; set; }

        [DataMember(Name = "grant")]
        ClashRewardTime Grant { get; set; }

        [DataMember(Name = "primary")]
        ClashRewardDefinition Primary { get; set; }

        [DataMember(Name = "show")]
        ClashRewardTime Show { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClashRewardOutput {\n");
            sb.Append("  Alternative: ").Append(Alternative).Append("\n");
            sb.Append("  Grant: ").Append(Grant).Append("\n");
            sb.Append("  Primary: ").Append(Primary).Append("\n");
            sb.Append("  Show: ").Append(Show).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}