#ifndef SWAGGER_TYPES_LolLoginAccountStateType_HPP
#define SWAGGER_TYPES_LolLoginAccountStateType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLoginAccountStateType {
    // 
    GENERATING = 6,
    // 
    TRANSFERRING_IN = 4,
    // 
    CREATING = 1,
    // 
    ENABLED = 2,
    // 
    TRANSFERRING_OUT = 3,
    // 
    TRANSFERRED_OUT = 5,
  };

  inline void to_json(nlohmann::json& j, const LolLoginAccountStateType& v) {
    switch(v) {
      case LolLoginAccountStateType::GENERATING:
        j = "GENERATING";
      break;
      case LolLoginAccountStateType::TRANSFERRING_IN:
        j = "TRANSFERRING_IN";
      break;
      case LolLoginAccountStateType::CREATING:
        j = "CREATING";
      break;
      case LolLoginAccountStateType::ENABLED:
        j = "ENABLED";
      break;
      case LolLoginAccountStateType::TRANSFERRING_OUT:
        j = "TRANSFERRING_OUT";
      break;
      case LolLoginAccountStateType::TRANSFERRED_OUT:
        j = "TRANSFERRED_OUT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLoginAccountStateType& v) {
    const auto& s = j.get<std::string>();
    if(s == "GENERATING"){
      v = LolLoginAccountStateType::GENERATING;
      return;
    }
    if(s == "TRANSFERRING_IN"){
      v = LolLoginAccountStateType::TRANSFERRING_IN;
      return;
    }
    if(s == "CREATING"){
      v = LolLoginAccountStateType::CREATING;
      return;
    }
    if(s == "ENABLED"){
      v = LolLoginAccountStateType::ENABLED;
      return;
    }
    if(s == "TRANSFERRING_OUT"){
      v = LolLoginAccountStateType::TRANSFERRING_OUT;
      return;
    }
    if(s == "TRANSFERRED_OUT"){
      v = LolLoginAccountStateType::TRANSFERRED_OUT;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLoginAccountStateType_HPP