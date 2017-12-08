using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LcdsInvitePrivileges
    {
        [DataMember(Name = "canInvite")]
        bool CanInvite { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LcdsInvitePrivileges {\n");
            sb.Append("  CanInvite: ").Append(CanInvite).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}