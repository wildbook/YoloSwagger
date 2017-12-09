using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGameQueuesQueueTranslation
    {
        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "detailedDescription")]
        public string DetailedDescription { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "shortName")]
        public string ShortName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameQueuesQueueTranslation {\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  DetailedDescription: ").Append(DetailedDescription).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  ShortName: ").Append(ShortName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}