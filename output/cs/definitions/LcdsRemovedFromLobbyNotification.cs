using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LcdsRemovedFromLobbyNotification
    {
        [DataMember(Name = "removalReason")]
        public LcdsRemovalReason RemovalReason { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LcdsRemovedFromLobbyNotification {\n");
            sb.Append("  RemovalReason: ").Append(RemovalReason).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}