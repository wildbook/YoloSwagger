#ifndef SWAGGER_TYPES_LolPftPFTSurveyV1_HPP
#define SWAGGER_TYPES_LolPftPFTSurveyV1_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPftPFTSurveyV1 {
    // 
    std::string url;
    // 
    std::string caption;
    // 
    std::string type;
    // 
    uint64_t id;
    // 
    std::string title;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTSurveyV1& v) {
    j["url"] = v.url;
    j["caption"] = v.caption;
    j["type"] = v.type;
    j["id"] = v.id;
    j["title"] = v.title;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTSurveyV1& v) {
    v.url = j.at("url").get<std::string>;
    v.caption = j.at("caption").get<std::string>;
    v.type = j.at("type").get<std::string>;
    v.id = j.at("id").get<uint64_t>;
    v.title = j.at("title").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPftPFTSurveyV1_HPP
