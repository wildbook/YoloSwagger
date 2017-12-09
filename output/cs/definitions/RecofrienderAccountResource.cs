using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RecofrienderAccountResource
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "contacts")]
        public RecofrienderActionResource[] Contacts { get; set; }

        [DataMember(Name = "platformId")]
        public string PlatformId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RecofrienderAccountResource {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  Contacts: ").Append(Contacts).Append("\n");
            sb.Append("  PlatformId: ").Append(PlatformId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}