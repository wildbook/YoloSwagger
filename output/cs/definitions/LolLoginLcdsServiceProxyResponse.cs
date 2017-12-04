using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLoginLcdsServiceProxyResponse {
    [DataMember(Name = "status")]
    string Status {get; set;}

    [DataMember(Name = "methodName")]
    string MethodName {get; set;}

    [DataMember(Name = "serviceName")]
    string ServiceName {get; set;}

    [DataMember(Name = "messageId")]
    string MessageId {get; set;}

    [DataMember(Name = "payload")]
    string Payload {get; set;}

    [DataMember(Name = "compressedPayload")]
    bool CompressedPayload {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLoginLcdsServiceProxyResponse {\n");
      sb.Append("  Status: ").Append(Status).Append("\n");
      sb.Append("  MethodName: ").Append(MethodName).Append("\n");
      sb.Append("  ServiceName: ").Append(ServiceName).Append("\n");
      sb.Append("  MessageId: ").Append(MessageId).Append("\n");
      sb.Append("  Payload: ").Append(Payload).Append("\n");
      sb.Append("  CompressedPayload: ").Append(CompressedPayload).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}