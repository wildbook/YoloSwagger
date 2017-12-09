using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PatcherP2PStatusUpdate
    {
        [DataMember(Name = "isAllowedByUser")]
        public bool IsAllowedByUser { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PatcherP2PStatusUpdate {\n");
            sb.Append("  IsAllowedByUser: ").Append(IsAllowedByUser).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}