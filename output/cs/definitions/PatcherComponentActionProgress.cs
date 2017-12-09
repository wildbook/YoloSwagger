using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PatcherComponentActionProgress
    {
        [DataMember(Name = "currentItem")]
        public string CurrentItem { get; set; }

        [DataMember(Name = "network")]
        public PatcherComponentStateProgress Network { get; set; }

        [DataMember(Name = "primaryWork")]
        public PatcherComponentStateWorkType PrimaryWork { get; set; }

        [DataMember(Name = "total")]
        public PatcherComponentStateProgress Total { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PatcherComponentActionProgress {\n");
            sb.Append("  CurrentItem: ").Append(CurrentItem).Append("\n");
            sb.Append("  Network: ").Append(Network).Append("\n");
            sb.Append("  PrimaryWork: ").Append(PrimaryWork).Append("\n");
            sb.Append("  Total: ").Append(Total).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}