#ifndef SWAGGER_TYPES_ClientBracketMatchStatus_HPP
#define SWAGGER_TYPES_ClientBracketMatchStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class ClientBracketMatchStatus {
    // 
    COMPLETED = 2,
    // 
    STARTED = 1,
    // 
    UPCOMING = 0,
  };

  inline void to_json(nlohmann::json& j, const ClientBracketMatchStatus& v) {
    switch(v) {
      case ClientBracketMatchStatus::COMPLETED:
        j = "COMPLETED";
      break;
      case ClientBracketMatchStatus::STARTED:
        j = "STARTED";
      break;
      case ClientBracketMatchStatus::UPCOMING:
        j = "UPCOMING";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ClientBracketMatchStatus& v) {
    const auto s& = j.get<std::string>();
    if(s == "COMPLETED"){
      v = ClientBracketMatchStatus::COMPLETED;
      return;
    }
    if(s == "STARTED"){
      v = ClientBracketMatchStatus::STARTED;
      return;
    }
    if(s == "UPCOMING"){
      v = ClientBracketMatchStatus::UPCOMING;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_ClientBracketMatchStatus_HPP
