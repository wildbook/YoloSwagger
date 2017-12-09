#pragma once
#include <json.hpp>
#include <optional>
#include "MetricDataType.hpp"
#include "AggregationType.hpp"
#include "MetricPriority.hpp"
#include "MetricType.hpp"
#include "MetricMetadataNotify.hpp"
#include "MetricMetadataAlert.hpp"
namespace leagueapi {
  struct MetricMetadata_t {
    uint32_t sample_window_ms;
    std::string units;
    std::vector<MetricMetadataAlert_t> alerts;
    std::string description;
    std::string pretty_name;
    std::string destination;
    MetricType_t type;
    MetricDataType_t data_type;
    MetricMetadataNotify_t notify;
    AggregationType_t transientAggregation;
    MetricPriority_t priority;
    std::string category;
    std::string info;
    uint32_t period;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadata_t& v) {
    j["sample_window_ms"] = v.sample_window_ms;
    j["units"] = v.units;
    j["alerts"] = v.alerts;
    j["description"] = v.description;
    j["pretty_name"] = v.pretty_name;
    j["destination"] = v.destination;
    j["type"] = v.type;
    j["data_type"] = v.data_type;
    j["notify"] = v.notify;
    j["transientAggregation"] = v.transientAggregation;
    j["priority"] = v.priority;
    j["category"] = v.category;
    j["info"] = v.info;
    j["period"] = v.period;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadata_t& v) {
    v.sample_window_ms = j.at("sample_window_ms").get<uint32_t>();
    v.units = j.at("units").get<std::string>();
    v.alerts = j.at("alerts").get<std::vector<MetricMetadataAlert_t>>();
    v.description = j.at("description").get<std::string>();
    v.pretty_name = j.at("pretty_name").get<std::string>();
    v.destination = j.at("destination").get<std::string>();
    v.type = j.at("type").get<MetricType_t>();
    v.data_type = j.at("data_type").get<MetricDataType_t>();
    v.notify = j.at("notify").get<MetricMetadataNotify_t>();
    v.transientAggregation = j.at("transientAggregation").get<AggregationType_t>();
    v.priority = j.at("priority").get<MetricPriority_t>();
    v.category = j.at("category").get<std::string>();
    v.info = j.at("info").get<std::string>();
    v.period = j.at("period").get<uint32_t>();
  }
  inline std::string to_string(const MetricMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
