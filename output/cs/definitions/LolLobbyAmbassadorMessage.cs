using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyAmbassadorMessage
    {
        [DataMember(Name = "errorCode")]
        string ErrorCode { get; set; }

        [DataMember(Name = "httpStatus")]
        int HttpStatus { get; set; }

        [DataMember(Name = "implementationDetails")]
        string ImplementationDetails { get; set; }

        [DataMember(Name = "message")]
        string Message { get; set; }

        [DataMember(Name = "payload")]
        dynamic Payload { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyAmbassadorMessage {\n");
            sb.Append("  ErrorCode: ").Append(ErrorCode).Append("\n");
            sb.Append("  HttpStatus: ").Append(HttpStatus).Append("\n");
            sb.Append("  ImplementationDetails: ").Append(ImplementationDetails).Append("\n");
            sb.Append("  Message: ").Append(Message).Append("\n");
            sb.Append("  Payload: ").Append(Payload).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}