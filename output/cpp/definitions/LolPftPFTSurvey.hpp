#ifndef SWAGGER_TYPES_LolPftPFTSurvey_HPP
#define SWAGGER_TYPES_LolPftPFTSurvey_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPftPFTSurvey {
    // 
    std::string title;
    // 
    std::map<std::string, nlohmann::json> data;
    // 
    uint64_t id;
    // 
    std::string caption;
    // 
    std::string type;
    // 
    std::string display;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTSurvey& v) {
    j["title"] = v.title;
    j["data"] = v.data;
    j["id"] = v.id;
    j["caption"] = v.caption;
    j["type"] = v.type;
    j["display"] = v.display;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTSurvey& v) {
    v.title = j.at("title").get<std::string>;
    v.data = j.at("data").get<std::map<std::string, nlohmann::json>>;
    v.id = j.at("id").get<uint64_t>;
    v.caption = j.at("caption").get<std::string>;
    v.type = j.at("type").get<std::string>;
    v.display = j.at("display").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPftPFTSurvey_HPP
