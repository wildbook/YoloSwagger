#ifndef SWAGGER_TYPES_LolPerksGetResultFromServiceDTO_HPP
#define SWAGGER_TYPES_LolPerksGetResultFromServiceDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksGetResultFromServiceDTO {
    // 
    std::string error;
    // 
    std::string result;
  };

  inline void to_json(nlohmann::json& j, const LolPerksGetResultFromServiceDTO& v) {
    j["error"] = v.error;
    j["result"] = v.result;
  }

  inline void from_json(const nlohmann::json& j, LolPerksGetResultFromServiceDTO& v) {
    v.error = j.at("error").get<std::string>;
    v.result = j.at("result").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPerksGetResultFromServiceDTO_HPP
