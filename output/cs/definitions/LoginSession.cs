using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LoginSession
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "idToken")]
        public string IdToken { get; set; }

        [DataMember(Name = "state")]
        public LoginSessionStates State { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LoginSession {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  IdToken: ").Append(IdToken).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}