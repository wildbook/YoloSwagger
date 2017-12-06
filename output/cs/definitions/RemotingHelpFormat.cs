using System.Runtime.Serialization;
namespace leagueapi {
  // Help format for remoting functions and types.
  [DataContract]  enum RemotingHelpFormat {
    // Short description format
    [DataMember(Name = "Brief")]
    Brief = 4,

    // Console-friendly description format
    [DataMember(Name = "Console")]
    Console = 5,

    // Python epytext format
    [DataMember(Name = "Epytext")]
    Epytext = 2,

    // Native help format
    [DataMember(Name = "Full")]
    Full = 1,

  }
}