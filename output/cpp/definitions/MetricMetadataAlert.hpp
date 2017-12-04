#ifndef SWAGGER_TYPES_MetricMetadataAlert_HPP
#define SWAGGER_TYPES_MetricMetadataAlert_HPP
#include <json.hpp>
#include "MetricMetadataNotify.hpp"
namespace leagueapi {
  // 
  struct MetricMetadataAlert {
    // 
    std::string info;
    // 
    std::string description;
    // 
    double min;
    // 
    double max;
    // 
    std::string level;
    // 
    std::string pretty_name;
    // 
    MetricMetadataNotify notify;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadataAlert& v) {
    j["info"] = v.info;
    j["description"] = v.description;
    j["min"] = v.min;
    j["max"] = v.max;
    j["level"] = v.level;
    j["pretty_name"] = v.pretty_name;
    j["notify"] = v.notify;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadataAlert& v) {
    v.info = j.at("info").get<std::string>;
    v.description = j.at("description").get<std::string>;
    v.min = j.at("min").get<double>;
    v.max = j.at("max").get<double>;
    v.level = j.at("level").get<std::string>;
    v.pretty_name = j.at("pretty_name").get<std::string>;
    v.notify = j.at("notify").get<MetricMetadataNotify>;
  }

}
#endif // SWAGGER_TYPES_MetricMetadataAlert_HPP
