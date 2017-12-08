using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct SanitizerSanitizeResponse
    {
        [DataMember(Name = "text")]
        string Text { get; set; }

        [DataMember(Name = "modified")]
        bool Modified { get; set; }

        [DataMember(Name = "texts")]
        string[] Texts { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class SanitizerSanitizeResponse {\n");
            sb.Append("  Text: ").Append(Text).Append("\n");
            sb.Append("  Modified: ").Append(Modified).Append("\n");
            sb.Append("  Texts: ").Append(Texts).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}