#ifndef SWAGGER_TYPES_EndOfGameLcdsPointsPenalty_HPP
#define SWAGGER_TYPES_EndOfGameLcdsPointsPenalty_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct EndOfGameLcdsPointsPenalty {
    // 
    double penalty;
    // 
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsPointsPenalty& v) {
    j["penalty"] = v.penalty;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsPointsPenalty& v) {
    v.penalty = j.at("penalty").get<double>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_EndOfGameLcdsPointsPenalty_HPP
