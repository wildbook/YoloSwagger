#ifndef SWAGGER_TYPES_PickModes_HPP
#define SWAGGER_TYPES_PickModes_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class PickModes {
    // 
    DONE = 2,
    // 
    IN_PROGRESS = 1,
    // 
    NOT_PICKING = 0,
  };

  inline void to_json(nlohmann::json& j, const PickModes& v) {
    switch(v) {
      case PickModes::DONE:
        j = "DONE";
      break;
      case PickModes::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case PickModes::NOT_PICKING:
        j = "NOT_PICKING";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PickModes& v) {
    const auto& s = j.get<std::string>();
    if(s == "DONE"){
      v = PickModes::DONE;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = PickModes::IN_PROGRESS;
      return;
    }
    if(s == "NOT_PICKING"){
      v = PickModes::NOT_PICKING;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PickModes_HPP
