#ifndef SWAGGER_TYPES_LolPftPFTSurvey_HPP
#define SWAGGER_TYPES_LolPftPFTSurvey_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolPftPFTSurvey {
'    // 
    std::string caption;
    // 
    std::map<std::string, nlohmann::json> data;
    // 
    std::string display;
    // 
    uint64_t id;
    // 
    std::string title;
    // 
    std::string type;
  };

  void to_json(nlohmann::json& j, const LolPftPFTSurvey& v) {
    j["caption"] = v.caption;
    j["data"] = v.data;
    j["display"] = v.display;
    j["id"] = v.id;
    j["title"] = v.title;
    j["type"] = v.type;
  }

  void from_json(const nlohmann::json& j, LolPftPFTSurvey& v) {
    v.caption = j.at("caption").get<std::string>;
    v.data = j.at("data").get<std::map<std::string, nlohmann::json>>;
    v.display = j.at("display").get<std::string>;
    v.id = j.at("id").get<uint64_t>;
    v.title = j.at("title").get<std::string>;
    v.type = j.at("type").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPftPFTSurvey_HPP
