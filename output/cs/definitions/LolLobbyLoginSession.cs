using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyLoginSession
    {
        [DataMember(Name = "accountId")]
        ulong AccountId { get; set; }

        [DataMember(Name = "connected")]
        bool Connected { get; set; }

        [DataMember(Name = "gasToken")]
        dynamic GasToken { get; set; }

        [DataMember(Name = "idToken")]
        string IdToken { get; set; }

        [DataMember(Name = "isNewPlayer")]
        bool IsNewPlayer { get; set; }

        [DataMember(Name = "puuid")]
        string Puuid { get; set; }

        [DataMember(Name = "state")]
        LolLobbyLoginSessionStates State { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "userAuthToken")]
        string UserAuthToken { get; set; }

        [DataMember(Name = "username")]
        string Username { get; set; }

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