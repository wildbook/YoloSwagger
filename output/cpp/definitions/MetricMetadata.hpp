#pragma once
#include <json.hpp>
#include <optional>
#include "MetricDataType.hpp"
#include "MetricMetadataAlert.hpp"
#include "AggregationType.hpp"
#include "MetricPriority.hpp"
#include "MetricMetadataNotify.hpp"
#include "MetricType.hpp"
namespace leagueapi {
  struct MetricMetadata_t {
    std::string category;
    std::string info;
    std::vector<MetricMetadataAlert_t> alerts;
    std::string description;
    MetricDataType_t data_type;
    std::string destination;
    uint32_t sample_window_ms;
    uint32_t period;
    MetricPriority_t priority;
    std::string pretty_name;
    MetricMetadataNotify_t notify;
    std::string units;
    MetricType_t type;
    AggregationType_t transientAggregation;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadata_t& v) {
    j["category"] = v.category;
    j["info"] = v.info;
    j["alerts"] = v.alerts;
    j["description"] = v.description;
    j["data_type"] = v.data_type;
    j["destination"] = v.destination;
    j["sample_window_ms"] = v.sample_window_ms;
    j["period"] = v.period;
    j["priority"] = v.priority;
    j["pretty_name"] = v.pretty_name;
    j["notify"] = v.notify;
    j["units"] = v.units;
    j["type"] = v.type;
    j["transientAggregation"] = v.transientAggregation;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadata_t& v) {
    v.category = j.at("category").get<std::string>();
    v.info = j.at("info").get<std::string>();
    v.alerts = j.at("alerts").get<std::vector<MetricMetadataAlert_t>>();
    v.description = j.at("description").get<std::string>();
    v.data_type = j.at("data_type").get<MetricDataType_t>();
    v.destination = j.at("destination").get<std::string>();
    v.sample_window_ms = j.at("sample_window_ms").get<uint32_t>();
    v.period = j.at("period").get<uint32_t>();
    v.priority = j.at("priority").get<MetricPriority_t>();
    v.pretty_name = j.at("pretty_name").get<std::string>();
    v.notify = j.at("notify").get<MetricMetadataNotify_t>();
    v.units = j.at("units").get<std::string>();
    v.type = j.at("type").get<MetricType_t>();
    v.transientAggregation = j.at("transientAggregation").get<AggregationType_t>();
  }
  inline std::string to_string(const MetricMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
