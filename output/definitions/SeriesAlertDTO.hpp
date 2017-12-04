#ifndef SWAGGER_TYPES_SeriesAlertDTO_HPP
#define SWAGGER_TYPES_SeriesAlertDTO_HPP
#include <json.hpp>
namespace test {
  // 
  struct SeriesAlertDTO {
'    // 
    int64_t alertTime;
    // 
    std::string description;
    // 
    std::string title;
  };

  void to_json(nlohmann::json& j, const SeriesAlertDTO& v) {
    j["alertTime"] = v.alertTime;
    j["description"] = v.description;
    j["title"] = v.title;
  }

  void from_json(const nlohmann::json& j, SeriesAlertDTO& v) {
    v.alertTime = j.at("alertTime").get<int64_t>;
    v.description = j.at("description").get<std::string>;
    v.title = j.at("title").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_SeriesAlertDTO_HPP
