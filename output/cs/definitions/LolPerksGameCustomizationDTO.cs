using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPerksGameCustomizationDTO
    {
        [DataMember(Name = "category")]
        public string Category { get; set; }

        [DataMember(Name = "content")]
        public string Content { get; set; }

        [DataMember(Name = "queueType")]
        public ulong QueueType { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksGameCustomizationDTO {\n");
            sb.Append("  Category: ").Append(Category).Append("\n");
            sb.Append("  Content: ").Append(Content).Append("\n");
            sb.Append("  QueueType: ").Append(QueueType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}