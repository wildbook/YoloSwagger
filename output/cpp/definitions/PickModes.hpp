#ifndef SWAGGER_TYPES_PickModes_HPP
#define SWAGGER_TYPES_PickModes_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class PickModes {
    // 
    NOT_PICKING = 0,
    // 
    IN_PROGRESS = 1,
    // 
    DONE = 2,
  };

  inline void to_json(nlohmann::json& j, const PickModes& v) {
    switch(v) {
      case PickModes::NOT_PICKING:
        j = "NOT_PICKING";
      break;
      case PickModes::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case PickModes::DONE:
        j = "DONE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PickModes& v) {
    const auto& s = j.get<std::string>();
    if(s == "NOT_PICKING"){
      v = PickModes::NOT_PICKING;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = PickModes::IN_PROGRESS;
      return;
    }
    if(s == "DONE"){
      v = PickModes::DONE;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PickModes_HPP
