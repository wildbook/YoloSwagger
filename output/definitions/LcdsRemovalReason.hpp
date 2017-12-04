#ifndef SWAGGER_TYPES_LcdsRemovalReason_HPP
#define SWAGGER_TYPES_LcdsRemovalReason_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LcdsRemovalReason {
    // 
    DESTROYED = 1,
    // 
    KICKED = 0,
    // 
    PROGRESSED = 2,
  };

  inline void to_json(nlohmann::json& j, const LcdsRemovalReason& v) {
    switch(v) {
      case LcdsRemovalReason::DESTROYED:
        j = "DESTROYED";
      break;
      case LcdsRemovalReason::KICKED:
        j = "KICKED";
      break;
      case LcdsRemovalReason::PROGRESSED:
        j = "PROGRESSED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LcdsRemovalReason& v) {
    const auto& s = j.get<std::string>();
    if(s == "DESTROYED"){
      v = LcdsRemovalReason::DESTROYED;
      return;
    }
    if(s == "KICKED"){
      v = LcdsRemovalReason::KICKED;
      return;
    }
    if(s == "PROGRESSED"){
      v = LcdsRemovalReason::PROGRESSED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LcdsRemovalReason_HPP
