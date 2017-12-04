#ifndef SWAGGER_TYPES_LolPerksGetResultFromServiceDTO_HPP
#define SWAGGER_TYPES_LolPerksGetResultFromServiceDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksGetResultFromServiceDTO {
    // 
    std::string result;
    // 
    std::string error;
  };

  inline void to_json(nlohmann::json& j, const LolPerksGetResultFromServiceDTO& v) {
    j["result"] = v.result;
    j["error"] = v.error;
  }

  inline void from_json(const nlohmann::json& j, LolPerksGetResultFromServiceDTO& v) {
    v.result = j.at("result").get<std::string>;
    v.error = j.at("error").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPerksGetResultFromServiceDTO_HPP
