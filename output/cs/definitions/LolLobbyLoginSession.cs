using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLoginSession
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "connected")]
        public bool Connected { get; set; }

        [DataMember(Name = "gasToken")]
        public dynamic GasToken { get; set; }

        [DataMember(Name = "idToken")]
        public string IdToken { get; set; }

        [DataMember(Name = "isNewPlayer")]
        public bool IsNewPlayer { get; set; }

        [DataMember(Name = "puuid")]
        public string Puuid { get; set; }

        [DataMember(Name = "state")]
        public LolLobbyLoginSessionStates State { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "userAuthToken")]
        public string UserAuthToken { get; set; }

        [DataMember(Name = "username")]
        public string Username { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLoginSession {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  Connected: ").Append(Connected).Append("\n");
            sb.Append("  GasToken: ").Append(GasToken).Append("\n");
            sb.Append("  IdToken: ").Append(IdToken).Append("\n");
            sb.Append("  IsNewPlayer: ").Append(IsNewPlayer).Append("\n");
            sb.Append("  Puuid: ").Append(Puuid).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  UserAuthToken: ").Append(UserAuthToken).Append("\n");
            sb.Append("  Username: ").Append(Username).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}